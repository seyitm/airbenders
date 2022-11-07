#include <iostream>
#define G  9.80665
using namespace std;
int main(){
	float time;
    float meters;
	cin  >> time;
	meters=1./2*G*(time*time);
	cout << meters;
}
