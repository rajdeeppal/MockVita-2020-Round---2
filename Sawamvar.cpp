#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n ;
  std::cin >> n ;
  string f ;
  string m ;
  std::cin >> f ;
  std::cin >> m ;
  int flag = 0 ;
  unordered_map < char , int > count ;
  queue < char > str ;
  for( char ch : f ){
    str.push( ch ) ;
  }
  for( char ch : m ){
    count[ ch ]++ ;
  }
  for( char ch : f ){
    if( ch == 'r' ){
      if( count[ 'r' ] == 0 ){
        flag = 1 ;
        std::cout << str.size() << '\n';
        break ;
      }
      str.pop() ;
      count[ 'r'  ] -=1 ;
    }
    if( ch == 'm' ){
      if( count[ 'm' ] == 0 ){
        flag = 1 ;
        std::cout << str.size() << '\n';
        break ;
      }
      str.pop() ;
      count[ 'm' ] -=1 ;
    }
  }
  if( flag == 0 ){
    std::cout << 0 << '\n';
  }
  return 0;
}
