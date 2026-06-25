#include <bits/stdc++.h>
using namespace std;

vector<long long> segmentedSieve(long long L, long long R) {
    long long limit = sqrt(R);

    // Simple sieve up to sqrt(R)
    vector<bool> isPrime(limit + 1, true);
    vector<long long> primes;

    isPrime[0] = isPrime[1] = false;

    for (long long i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (long long j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }

    // Segmented sieve
    vector<bool> segment(R - L + 1, true);

    for (long long p : primes) {
        long long start = max(p * p, ((L + p - 1) / p) * p);

        for (long long j = start; j <= R; j += p)
            segment[j - L] = false;
    }

    if (L == 1)
        segment[0] = false;

    vector<long long> result;

    for (long long i = L; i <= R; i++) {
        if (segment[i - L])
            result.push_back(i);
    }

    return result;
}

int main() {
    long long L, R;
    cin >> L >> R;

    vector<long long> primes = segmentedSieve(L, R);

    for (long long p : primes)
        cout << p << " ";

    return 0;
}