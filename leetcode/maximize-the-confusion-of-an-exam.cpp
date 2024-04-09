class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int tCnt = 0, fCnt = 0, maxL = 0;
        int l = 0, leng = answerKey.length();
        for (int r = 0; r < leng; ++r) {
            answerKey[r] == 'T' ? tCnt++ : fCnt++;
            // retract min(tCnt, fCnt) to maximize leng
            while (min(tCnt, fCnt) > k) {
                answerKey[l++] == 'T' ? tCnt-- : fCnt--;
            }
            maxL = max(maxL, r - l + 1);
        }

        return maxL;
    }
};