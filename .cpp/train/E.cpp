#include <iostream>
#include <iterator>
#include <array>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
static auto speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

static constexpr int MAX_PRIME_CNT = 25;

int main()
{

    constexpr array<int, MAX_PRIME_CNT> prime_collection = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    string s1, s2;
    while (cin >> s1 >> s2 && s1 != "0" && s2 != "0")
    {
        array<int, MAX_PRIME_CNT> A, B;
        vector<int> res;
        int a_count = 0, b_count = 0;

        A.fill(0);
        B.fill(0);
        for (auto it_a = s1.begin(); it_a != s1.end(); it_a++)
        {
            if (*it_a != ',')
            {
                A[a_count] = A[a_count] * 10 + static_cast<int>(*it_a - '0');
            }
            else
                ++a_count;
        }
        ++a_count;
        for (auto it_b = s2.begin(); it_b != s2.end(); it_b++)
        {
            if (*it_b != ',')
            {
                B[b_count] = B[b_count] * 10 + (int)*it_b - '0';
            }
            else
                ++b_count;
        }
        ++b_count;

        reverse(A.begin(), A.begin() + a_count);
        reverse(B.begin(), B.begin() + b_count);
        for (int i = 0; i < a_count || i < b_count; i++)
        {
            res.push_back(A[i] + B[i]);
        }
        // reverse(res.begin(), res.end());
        res.push_back(0); //
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] >= prime_collection[i])
            {
                res[i] -= prime_collection[i];
                res[i + 1]++;
            }
        }
        auto it = res.rbegin();
        if (*it == 0)
        {
            it++;
        }
        cout << *it++;
        while (it != res.rend())
        {
            cout << "," << *it++;
        }
        cout << endl;
    }
}
/*
static array<int, 25> generate_primes_bak()
{
    array<int, 25> prime_collection;
    for (int n = 0, i = 2; n < 25; ++i)
    {
        if (is_prime(i))
        {
            prime_collection[n++] = i;
        }
    }
    return prime_collection;
}

template <int N = 1000>
static vector<int> generate_primes()
{
    array<bool, N> is_prime;
    vector<int> prime_collection;
    is_prime.fill(true);
    int count = 0;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            prime_collection.push_back(i);
            for (int k = i + i; k < N; k += i)
            {
                is_prime[k] = false;
            }
        }
    }
    return prime_collection;
}

bool is_prime(const int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
*/
