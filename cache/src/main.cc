// Auto Genrated C++ template file by newton CLI

#include"cache.cxx"
std::vector<Eq> cache;
struct Eq value;
long long int multy(const long long int&, const long long int&);
long long int Cache(const long long int &, const long  long int &);
int main(int argc, char *argv[])
{
    while (true)
    {
        std::cerr << "Enter Two Values To Perform * Operation : ";
        long long int x1{0}, x2{0}, result{0};
        std::cin >> x1 >> x2;
        result = multy(x1, x2);
        std::cerr << "\nresult : " << result << "\n";
    };

    return 0;
};
