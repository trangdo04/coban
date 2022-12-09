#include <iostream>
using namespace std;

bool canPlaceFlowers (int flowerbed[], int n, int k)
{
    int s = 0;

    for(int i=0; i<n; i++){
        if( 1 <= i && i < n-1){
            if( flowerbed[i-1] != 1 && flowerbed[i] != 1 && flowerbed[i+1] != 1)
            {
            s += 1;
            flowerbed[i] = 1;
            }
        }
        else if( i == 0){
            if( flowerbed[0] != 1 && flowerbed[1] != 1 ){
                s += 1;
                flowerbed[i] = 1;
            }
        }
        else{
            if( flowerbed[n-2] != 1 && flowerbed[n-1] != 1){
                s += 1;
                flowerbed[i] = 1;
            }
        }
    }

//    cout << "s la: " << s << "  k la: " << k << endl;

    if(s >= k){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    int flowerbed[n];

    for(int i=0; i<n; i++){
        cin >> flowerbed[i];
    }

    cout << boolalpha << canPlaceFlowers(flowerbed, n, k) << endl;
}
