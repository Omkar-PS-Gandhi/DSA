/* *****************************************************************************
 *  Name:              Ada Lovelace
 *  Coursera User ID:  123456
 *  Last modified:     October 16, 1842
 **************************************************************************** */

import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;
import edu.princeton.cs.algs4.StdRandom;

public class RandomWord {
    public static void main(String[] args) {
        int wordCount = 0;
        String champion = "";
        String newChampion = "";
        while (!StdIn.isEmpty()) {
            newChampion = StdIn.readString();
            wordCount++;
            if (StdRandom.bernoulli(1.0 / wordCount)) {
                champion = newChampion;
            }
        }
        StdOut.println(champion);
    }
}
