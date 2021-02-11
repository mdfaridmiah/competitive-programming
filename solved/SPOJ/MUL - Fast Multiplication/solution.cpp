#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
int main()
{
    mp::cpp_int tt;
    std::cin>>tt;
    while(tt--)
    {
     mp::cpp_int s1,s2,ans;
     std::cin>>s1>>s2;
     ans=s1*s2;
     std::cout<<ans<<'\n';
    }
} 