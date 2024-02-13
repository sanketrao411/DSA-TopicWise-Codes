# Read n and m
n, m = map(int, input().split())

# Read and store the lists of rhyming words
rhyme_groups = [set(input().split()) for _ in range(n)]  # Store rhyming words as sets

# Read the blank line
input()

# Read the passage
passage = [line.lower().split() for line in [input() for _ in range(m)]]  # Convert input passage to lowercase and split

# Initialize an empty rhyme scheme string
rhyme_scheme = ""

# Create a dictionary to store the rhyme group for each word
word_rhyme_group = {}

# Determine the rhyme scheme for each line in the passage
for line in passage:
    last_word = line[-1]  # Consider the last word in the line
    last_word_rhyme_group = None

    # Find the rhyme group for the last word
    for i, group in enumerate(rhyme_groups):
        if last_word in group:
            last_word_rhyme_group = chr(ord('A') + i)
            break

    # If the last word does not rhyme, label it with 'X'
    if last_word_rhyme_group is None:
        last_word_rhyme_group = 'X'

    # Update the rhyme scheme
    rhyme_scheme += last_word_rhyme_group

# Output the rhyme scheme
print(rhyme_scheme)
