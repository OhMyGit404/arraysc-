#include "arrays.h"

void loop();
double nums [6] = {12.25,32.50,16.90,23,45.68,50.60 };
int main(){
    loop();
    return 0;
}
void loop(){
    for (double* i = &nums[0];i < nums + (sizeof(nums)/ sizeof(nums[0])); i++) {
        cout << *i <<endl;
    }
}