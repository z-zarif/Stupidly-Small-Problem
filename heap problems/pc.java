class Inventory {

    private int count = 0;

    private final int SIZE = 4;

    // Producer method
    synchronized void putProduct() {

        while(count == SIZE) {

            try {
                wait();
            }
            catch(InterruptedException e) {
                e.printStackTrace();
            }
        }

        count++;

        System.out.println(
            "Producer added product. Total = " + count
        );

        notifyAll();
    }

    // Consumer method
    synchronized void getProduct() {

        while(count == 0) {

            try {
                wait();
            }
            catch(InterruptedException e) {
                e.printStackTrace();
            }
        }

        System.out.println(
            "Consumer removed product. Total = " + count
        );

        count--;

        notifyAll();
    }
}

// Producer thread
class Producer extends Thread {

    Inventory inventory;

    Producer(Inventory inventory) {
        this.inventory = inventory;
    }

    public void run() {

        for(int i = 1; i <= 10; i++) {

            inventory.putProduct();

            try {
                sleep(500);
            }
            catch(Exception e) {}
        }
    }
}

// Consumer thread
class Consumer extends Thread {

    Inventory inventory;

    Consumer(Inventory inventory) {
        this.inventory = inventory;
    }

    public void run() {

        for(int i = 1; i <= 10; i++) {

            inventory.getProduct();

            try {
                sleep(800);
            }
            catch(Exception e) {}
        }
    }
}

public class pc{

    public static void main(String[] args) {

        Inventory inventory = new Inventory();

        Producer p = new Producer(inventory);

        Consumer c = new Consumer(inventory);

        p.start();

        c.start();
    }
}