from random import randint


greetings = "Good day. I hope you are well today.\nWhat can I do for you?\n"


history = []


def response(message=""):

    if message == 'quit':
        return

    pronouns = {
        "I": "you",
        "me": "you",
        "myself": "yourself",
        "I'm": "you are",
        "My": "your",
        "my": "your",
        "you": "I",
        "You": "I",
        "Your": "my",
        "your": "my",
        "yours": "mine",
        "mine": "yours",
        "you're": "I'm",
    }

    updated_message = []

    splits = message.split()

    # for loop to iterate over words array
    for word in splits:
        if word in pronouns:
            updated_message.append(pronouns[word])
        else:
            updated_message.append(word)

    updated_message = " ".join(word for word in updated_message)

    qualifier = [
        "Why do you say that",
        "You seem to think that",
        "Can you explain why"
    ]

    hedge = [
        "Please tell me more",
        "What happened then?",
        "You sound sad.",
        "I'd like to hear your opinion.",
        "How will you handle this in the future?",
        "It sounds to me like you're feeling overwhelmed right now.",
    ]

    temp_rand = randint(0, len(qualifier) + len(hedge))
    if len(history) >= 4:
        # Repeat if random generated number already in history.
        while temp_rand in history:
            temp_rand = randint(0, len(qualifier) + len(hedge))

        del history[0]
        history.append(temp_rand)
    else:
        while temp_rand in history:
            temp_rand = randint(0, len(qualifier) + len(hedge))

        history.append(temp_rand)
    
    current_number = history[len(history) - 1]

    # If latest history is 1, use qualifier.
    if current_number <= 3:
        response(input(f"{qualifier[current_number -1]} {updated_message}\n"))
    else:
        response(input(f"{hedge[current_number - 4]}\n"))


response(input(greetings))
