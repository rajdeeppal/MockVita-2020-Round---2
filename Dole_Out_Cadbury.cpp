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
int count_squar( int hight , int width ){
  int cnt = 0 ;
  int m = INT_MAX ;
  std::cout << hight<<"---"<<width << '\n';
  while ( ( hight != width ) && ( hight > 1 && width > 1 ) ) {
    std::cout << hight<<"---"<<width << '\n';
    m = min( hight , width ) ;
    std::cout << "min -> "<< m  << '\n';
    cnt += 1 ;
    int h = hight - m ;
    int w = width - m ;
    if( h != 0 )
      hight = h ;
    else if( w != 0 )
      width = w ;
  }
  if( hight == width )
    cnt += 1 ;
  else if( hight != 1 )
    cnt += hight ;
  else if( width != 1 )
    cnt += width ;
  return cnt ;
}
int main(int argc, char const *argv[]) {
  int p , q , r , s ;
  std::cin >> p ;
  std::cin >> q ;
  std::cin >> r ;
  std::cin >> s ;
  int sum = 0 ;
  for( int i = p ; i <= q ; ++i ){
    for( int j = r ; j <= s ; ++j ){
      if( i == j ){
        sum += 1 ;
      }
      else
        sum += count_squar( i , j ) ;
    }
  }
  std::cout << sum << '\n';
  return 0;

}
