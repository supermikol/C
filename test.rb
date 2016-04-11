
def length_of_longest_substring(s)
  return 1 if s.length == 1
  arry = []
  max_length = 0
  for j in 0..s.length-1
    if !arry.include?(s[j])
      arry << s[j]
    else
      max_length = arry.length if max_length < arry.length
      arry << s[j]
      until (arry.shift == s[j])
      end
    end
  end
  return arry.length > max_length ? arry.length : max_length
end


def two_sum(nums, target)
  hash = {}
  nums.each_with_index do |num,index|
    if hash[target-num]
      return [hash[target-num], index]
    else
      hash[num] = index
    end
  end
  return []
end


p two_sum([1,2,3,4], 9)
