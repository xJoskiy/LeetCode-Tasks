#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void foo(const std::byte* data, std::byte*& dest) {
    dest = nullptr;
}

int main()
{
    byte a{ 253 };
    const byte b{ 53 };

    byte* pa = &a;
    byte* temp = &a;
    const byte* pb = &b;

    foo(pb, pa);
    cout << endl;

    return 0;
}


//int main()
//{
//    unordered_map<int, int> hash;
//    vector<int> symbol_id;
//    int N, K, cur, next, total = 0;
//
//    cin >> N;
//    symbol_id.resize(N);
//
//    for (int i = 0; i < N; ++i)
//        cin >> symbol_id[i];
//
//    for (int i = 0; i < N; ++i)
//        cin >> hash[symbol_id[i]];
//
//    cin >> K;
//    cin >> cur;
//    for (int i = 0; i < K - 1; ++i) {
//        cin >> next;
//        if (hash[cur] != hash[next]) total++;
//        swap(cur, next);
//    }
//
//
//    cout << total;
//
//    return 0;
//}




//struct Data
//{
//public:
//    static int total;
//    vector<bool> available;
//    int position;   // Index
//    int resets;     // Resets
//    int count;      // Number of servers in a data centre;
//    int work;       // Working servers
//
//    Data(int _work) : position(++total), resets(0), work(_work), count(_work) {
//        available = vector<bool>(count, 1);
//    };
//};
//
//int Data::total = 0;
//
//int Greater(const void* _left, const void* _right) {
//    const Data* left = (const Data*)_left;
//    const Data* right = (const Data*)_right;
//
//    int A = left->work * right->resets;
//    int B = right->work * right->resets;
//
//    if (A > B) return true;
//    else if (A == B) return left->position > right->position;
//
//    return -1;
//};
//
//int Less(const void* _left, const void* _right) {
//    const Data* left = (const Data*)_left;
//    const Data* right = (const Data*)_right;
//
//    int A = left->work * right->resets;
//    int B = right->work * right->resets;
//
//    if (A < B) return true;
//    else if (A == B) return left->position > right->position;
//
//    return -1;
//};
//
//int main()
//{
//    int m, n, q;
//    string input;
//
//    cin >> m >> n >> q;
//    vector<Data> DataCentres;   // Number of resets and working servers and indices
//    for (int i = 0; i < m; i++)
//        DataCentres.emplace_back(Data(n));
//
//    function<void()> disable = [&DataCentres]() {
//        int ind_serv, ind_data;
//        cin >> ind_data >> ind_serv;
//        ind_data--, ind_serv--;
//
//        if (DataCentres[ind_data].available[ind_serv])  // If it is not disabled
//            DataCentres[ind_data].work--, DataCentres[ind_data].available[ind_serv] = 0;
//    };
//
//    function<void()> reset = [&DataCentres, &n, &m]() {
//        int ind_data;
//        cin >> ind_data;
//        ind_data--;
//
//        DataCentres[ind_data].resets++;
//        DataCentres[ind_data].work = n;
//        DataCentres[ind_data].available = vector<bool>(n, 1);
//    };
//
//    function<int()> get_min = [&DataCentres, &n, &m]() {
//        vector<Data> sorted_least = DataCentres;
//        qsort(&sorted_least[0], sorted_least.size(), sizeof(Data), Less);
//
//        return sorted_least.front().position;
//    };
//
//    function<int()> get_max = [&DataCentres, &n, &m]() {
//        vector<Data> sorted_max = DataCentres;
//        qsort(&sorted_max[0], sorted_max.size(), sizeof(Data), Greater);
//
//        return sorted_max.front().position;
//    };
//
//    for (int i = 0; i < q; i++)
//    {
//        cin >> input;
//        if (input == "DISABLE") disable();
//        if (input == "RESET") reset();
//        if (input == "GETMAX") cout << get_max() << endl;
//        if (input == "GETMIN") cout << get_min() << endl;
//
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <cstddef>
//#include <functional>
//
//using namespace std;
//
//class Shape
//{
//public:
//    int square = 0;
//    virtual int GetSquare() = 0;
//};
//
//
//class Triangle : public Shape
//{
//    vector<int> points;
//    Triangle(initializer_list<int>&& nums) {
//        for (int x : nums) points.push_back(x);
//    }
//
//    int GetSquare() {
//        return square;
//    }
//
//    Triangle(Triangle&& obj) {
//
//    }
//
//    Triangle(const Triangle& obj) {
//        move(obj);
//    }
//};
//
//
//template <class T>
//void print_bin(T* x)
//{
//    int size = sizeof(*x);
//
//    for (int i = size - 1; i >= 0; i--) {
//        for (int j = 7; j >= 0; j--)
//            cout << ((*(reinterpret_cast<bool*>(&*x) + i) >> j) & 1);
//        cout << " ";
//    }
//
//    cout << endl;
//}
//
//template <class T>
//void foo(T pred, size_t a)
//{
//
//
//}
//
//int func(float a, ...) {
//    va_list list;
//}
//
//int main()
//{
//
//
//
//    //func(1, 4, 6, 4, 4);
//
//    /*int x = 5;
//    function<bool(const byte*)> pred = [&](const std::byte* a) -> bool { return a; };
//
//    foo(pred, 3);
//
//    int a;
//    const int b = 1;
//    int const* p1;
//    const int* p2;*/
//
//    return 0;
//}
//
////int main()
////{
////    int M, N, curMax = 1, max = 1;
////    bool deleted = false;
////    cin >> M >> N;
////    vector<pair<int, int>> pairs(N), ans, temp;
////    auto end = ans.begin();
////    for (int i = 0; i < N; i++)
////        cin >> pairs[i].first >> pairs[i].second;
////
////    for (pair<int, int> cur : pairs)
////    {
////        for (int j = 0; j < ans.size(); j++)
////        {
////            if (!((ans[j].first <= cur.first && cur.first <= ans[j].second)
////                || (ans[j].first <= cur.second && cur.second <= ans[j].second)))
////                temp.push_back(ans[j]);
////        }
////
////        int index = 0;
////        while (index < temp.size())
////        {
////            if (cur.first > temp[index].first) break;
////            else index++;
////        }
////        temp.insert(temp.begin() + index, cur);
////        ans = temp;
////
////
////    }
////    cout << (end - ans.begin());
////
////    return 0;
////}
//
//
////int main()
////{
////    vector<int> a {1, 2, 3, 1, 1, 1, 4};
////    auto end = remove(a.begin(), a.end(), 1);
////    for (auto it = a.begin(); it != end; it++)
////        cout << *it << " ";
////
////    return 0;
////}