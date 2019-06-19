#include <iostream>

int main() {
  int dim_x = 200;
  int dim_y = 100;
  std::cout << "P3\n" << dim_x << " " << dim_y << "\n255\n";
  for (int j = dim_y -1; j >= 0; j --) {
    for (int i = 0; i < dim_x; i ++){
      double r = double(i) / double(dim_x);
      double g = double(j) / double(dim_y);
      double b = 0.2;
      int r_out = 255 * r;
      int g_out = 255 * g;
      int b_out = 255 * b;
      std::cout << r_out << " " << g_out << " " << b_out << "\n";  
    }
  }
}
