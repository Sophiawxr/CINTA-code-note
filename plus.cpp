#include <iostream>

using namespace std;

// 加法函数
int add(int a, int b) {

  // 递归终止条件
  if(b == 0) return a;

  // 无进位相加
  int sum = a ^ b;

  // 进位
  int carry = (a & b) << 1;

  // 递归处理进位
  return add(sum, carry); 
}


int main() {

  int a ; 
  int b ; 
  cin>>a>>b;
  // 调用递归函数
  int res = add(a, b);

  // 输出结果
  cout << "a + b = " << res << endl;

  return 0;
}