class Solution(object):
    # def prefixesDivBy5(self, nums):
    #     cnt=0
    #     result = [False]*len(nums)
    #     for i in range(len(nums)):
    #         temp=0
    #         prev=cnt
    #         for j in range(i+1):
    #             temp+=nums[j]*(2**prev)
    #             prev-=1

    #         if (temp%5==0): 
    #             result[i]=True;   
    #         cnt+=1
        
    #     return result 
    def prefixesDivBy5(self, nums):
        curr=0
        result=[]
        for i in range(len(nums)):
            curr = curr * 2 + nums[i]
            result.append(curr%5==0)
        return result

                    





        