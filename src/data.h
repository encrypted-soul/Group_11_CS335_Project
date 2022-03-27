#ifndef DATA_H
#define DATA_H

#include <bits/stdc++.h>
using namespace std;

struct Data {
  /* Four basic types : int, float, bool, string */
  /* bool is treated as int 0/1 */
  int v_int = 0;
  float v_float = 0.0;
  string v_str = "";
  string cmnt = "";

  Data();
  Data(int v_int);
  Data(float v_float);
  Data(string v_str);
  Data(int v_int, string cmnt);
  Data(float v_float, string cmnt);
  Data(string v_str, string cmnt);
};
#endif