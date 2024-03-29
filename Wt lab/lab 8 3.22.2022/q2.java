
interface motor {
    int capacity = 200;

    void run();

    void consume();
}

class q2 implements motor {
    public void run() {
        System.out.println("It's running Sucessfully");
    }

    public void consume() {
        System.out.println("It also consume low current");
    }

    public static void main(String args[]) {
        motor obj = new q2();
        obj.run();
        obj.consume();
    }
}