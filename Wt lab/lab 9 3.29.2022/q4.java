import java.util.Scanner;

class Time {
    int hours, minutes, seconds;

    public Time(int hours, int minutes, int seconds) {
        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    public void setTime(int hours, int minutes, int seconds) throws HrsException, MinException, SecException {
        if (hours > 24 || hours < 0) {
            throw new HrsException("Hours should be between 0 and 24");
        } else if (minutes > 60 || minutes < 0) {
            throw new MinException("Minutes should be between 0 and 60");
        } else if (seconds > 60 || seconds < 0) {
            throw new SecException("Seconds should be between 0 and 60");
        } else {
            this.hours = hours;
            this.minutes = minutes;
            this.seconds = seconds;
        }
    }

    public void displayTime() {
        System.out.println("Time is " + hours + ":" + minutes + ":" + seconds);
    }
}

class HrsException extends Exception {
    public HrsException(String message) {
        super(message);
    }
}

class MinException extends Exception {
    public MinException(String message) {
        super(message);
    }
}

class SecException extends Exception {
    public SecException(String message) {
        super(message);
    }
}

class q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter hours, minutes and seconds");
        int hours = sc.nextInt();
        int minutes = sc.nextInt();
        int seconds = sc.nextInt();
        Time t = new Time(hours, minutes, seconds);
        try {
            t.setTime(hours, minutes, seconds);
        } catch (HrsException e) {
            System.out.println(e);
        } catch (MinException e) {
            System.out.println(e);
        } catch (SecException e) {
            System.out.println(e);
        }
        t.displayTime();
    }
}