# Implement the function unique_in_order which takes as argument
# a sequence and returns a list of items without any elements
# with the same value next to each other and preserving the
# original order of elements.

#test.assert_equals(unique_in_order('AAAABBBCCDAABBB'), ['A','B','C','D','A','B'])


def unique_in_order(sequence=''):
    unique = []
    for index, _ in enumerate(sequence):
        try:
            if (sequence[index] != sequence[index+1]):
                unique.append(sequence[index])
        except:
            if (sequence[index] != ''):
                unique.append(sequence[index])
    return unique


print(unique_in_order('AAAABBBCCDAABBB'))

