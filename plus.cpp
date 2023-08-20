#include <iostream>
using namespace std;

int add(int a, int b) {

  // 递归终止条件
  if(b == 0) return a;

  // 无进位
  int sum = a ^ b;

  // 进位
  int carry = (a & b) << 1;

  // 递归处理进位
  return add(sum, carry); 
}


int main() {

  int a ; 
  int b ; 
  cout << "输入加数" << endl;
  cin >> a >> b;
  int res = add(a, b);

  // 输出结果
  cout << "a + b = " << res << endl;

  return 0;
}
