#ifndef DATA_H
#define DATA_H

#include <bits/stdc++.h>
using namespace std;

struct Data {
  /* Four basic types : int, float, bool, string */
  /* bool is treated as int 0/1 */
  string value = "";

  Data();
  Data(string value);
};
#endif