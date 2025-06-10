class Solution(object):
    def lengthOfLastWord(self, s):
        parse = s.split(" ")
        for element in parse:
            if element != '':
                length=len(element)

        return length 
        