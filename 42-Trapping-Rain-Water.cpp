class Solution {
public:
    int trap(vector<int>& height) {
        int fr,frd, sec;
        int count = 0, count2 = 0;;

        fr = height[0];
        frd = 0;
        
        for (int i = 1; i < height.size(); i++) {
            if (height[i] >= fr){
                if ((i - frd) > 1){
                    for (int j = frd+1; j <= i; j++){
                        if ((fr - height[j]) > 0) count += fr - height[j];
                    }
                    fr = height[i];
                    frd = i;
                }else {
                    fr = height[i];
                    frd= i;
                }
            }
        }
        int temp = frd;
        frd = height.size()-1;
        fr = height[frd];
        for (int i = height.size()-2; i >= temp; i--) {
            if (height[i] >= fr){
                if (abs(i - frd) > 1){
                    for (int j = frd-1; j > i; j--){
                        count += fr - height[j];
                    }
                    fr = height[i];
                    frd = i;
                }else {
                    fr = height[i];
                    frd= i;
                }
            }
        }
        
        return count;
    }
};