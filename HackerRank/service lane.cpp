// #include <bits/stdc++.h>

// using namespace std;

// int min(int a, int b)
// {
//     return a > b ? b : a;
// }

// int main()
// {
//     int N, T;
//     cin>>N>>T;
//     int width[N];

//     for (int i = 0; i < N; i ++) {
//         scanf("%d", &width[i]);
//     }

//     for (int i = 0; i < T; i ++) {
//         int l, r;
//         cin>>l>>r;

//         int result = width[l];
//         while(l <= r) {
//             result = min(result, width[l]);
//             l ++;
//         }

//         cout<<result<<endl;
//     }

//     return 0;
// }