public class Main {
    public static void main(String[] args) {

        int[] numbers = new int[5];

        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = (i + 1) * 10;
        }

        System.out.println("Numbers:");

        for (int number : numbers) {
            System.out.println(number);
        }

        numbers = null;

        System.gc();

        System.out.println("Object is no longer referenced.");
    }
}