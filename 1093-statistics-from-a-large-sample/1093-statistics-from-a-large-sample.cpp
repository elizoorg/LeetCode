class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        double min = 256, max = 0, sum = 0.0, frequency = count[0], mode = 0;
        int numb_count = 0;
        for (int i = 0; i <=255; i++) {
            if (count[i] > 0) {
                if (min > i) min = i;
                if (max < i) max = i;
                if (frequency < count[i]) {
                    frequency = count[i];
                    mode = i;
                }
                sum += i *1.0* count[i];
                numb_count += count[i];
            }
        }
        sum /= numb_count;
        vector<double> ans = { min,max,sum };
        bool even = numb_count % 2 ? 0 : 1;
        int middle = (numb_count + 1) / 2;
        int ccount = 0;
        int i = 0;
        for (i; i <=255; i++) {
            if (count[i] > 0)
            {
                ccount += count[i];
                    if (ccount >= middle) break;
            }
           }
            
    double median = i;
        if (even) {
            if (ccount > middle) {
                ans.push_back(median);
                    ans.push_back(mode);
                    return ans;
            }
            else {
                i++;
                while (i <= 255) {
                    if (count[i] > 0) {
                        median += i;
                        median /= 2.0;
                        break;
                    }
                    i++;
                }
            }
        }

    ans.push_back(median);
    ans.push_back(mode);
    return ans;
}
};
