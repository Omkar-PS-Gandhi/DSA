/* *****************************************************************************
 *  Name:              Ada Lovelace
 *  Coursera User ID:  123456
 *  Last modified:     October 16, 1842
 **************************************************************************** */

public class HelloGoodbye {
    public static void main(String[] args) {
        if (args.length > 0) {
            String personOne = args[0];
            String personTwo = args[1];

            System.out.println("Hello " + personOne + " and " + personTwo + ".");
            System.out.println("Goodbye " + personTwo + " and " + personOne + ".");

        }
    }
}
