#include "data.h"

Data::Data() {}

Data::Data(int v_int) : v_int(v_int) {}

Data::Data(float v_float) : v_float(v_float) {}

Data::Data(string v_string) : v_str(v_string) {}

Data::Data(int v_int, string cmnt) : v_int(v_int), cmnt(cmnt) {}

Data::Data(float v_float, string cmnt) : v_float(v_float), cmnt(cmnt) {}

Data::Data(string v_string, string cmnt) : v_str(v_string), cmnt(cmnt) {}