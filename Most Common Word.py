import re
class Solution:
    def mostCommonWord(self, paragraph, banned):
        """
        :type paragraph: str
        :type banned: List[str]
        :rtype: str
        """
        #paragraph= re.split("[" + string.punctuation + "]+", paragraph)
        paragraph = re.findall(r"\w+", paragraph)
        count={}
        banned=set(banned)
        for word in paragraph:
            if word.lower() not in banned:
                try:
                    count[word.lower()]+=1
                except KeyError:
                    count[word.lower()]=1
        return max(count, key=count.get)
