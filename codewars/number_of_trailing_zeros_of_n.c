/*
 * Challenge: Number of trailing zeros of N!
 * Platform: Codewars
 * Difficulty: 5 kyu
 * Time complexity: O(log n)
 * Space complexity: O(1)
 */

long long zeros(long long n) {
    long long cont = 0;

    while (n > 0) {
        cont += n / 5;
        n /= 5;
    }

    return cont;
}