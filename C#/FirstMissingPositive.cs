using System;
using System.Collections.Generic;

namespace MissingPositive {
    class MissingPositive {
        // Return the first missing positive number in a list
        // [1, 3, 5, 7] -> 2
        public int FirstMissingPositive (int[] nums) {
            HashSet<int> numbers = new HashSet<int> ();

            // Store all unique numbers above 0
            foreach (int n in nums) {
                if (n > 0) {
                    numbers.Add (n);
                }
            }

            int previous = 1;
            int amount = nums.Length;

            while (previous <= amount) {
                // Current number doesn't exist
                if (!numbers.Contains (previous)) {
                    return previous;
                }

                previous++;
            }

            return previous;
        }
    }
}