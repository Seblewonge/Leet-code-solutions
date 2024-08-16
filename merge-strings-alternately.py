class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = ""
        min_value = min(len(word1) , len(word2))
        for i in range(min_value):
            res += word1[i] + word2[i]
        res += word1[min_value:]
        res += word2[min_value:]

        return res
