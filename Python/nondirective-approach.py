from random import randint

greetings = "\033[0;1;34;40mGood day. I hope you are well today.\nWhat can I do for you?\n\033[1;31;40m"


class Doctor:
    """
    A Doctor class by:
    Lester De Guzman & Hershey Delos Reyes
    """

    def __init__(self):
        self.history = []

    def response(self, message=""):

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
        if len(self.history) >= 4:
            # Repeat if random generated number already in history.
            while temp_rand in self.history:
                temp_rand = randint(0, len(qualifier) + len(hedge))

            del self.history[0]
            self.history.append(temp_rand)
        else:
            while temp_rand in self.history:
                temp_rand = randint(0, len(qualifier) + len(hedge))

            self.history.append(temp_rand)

        current_number = self.history[len(self.history) - 1]

        # If latest history is 1, use qualifier.
        if current_number <= 3:
            self.response(
                input(f"\033[0;1;34;40m{qualifier[current_number -1]} {updated_message}\n\033[1;31;40m"))
        else:
            self.response(
                input(f"\033[0;1;34;40m{hedge[current_number - 4]}\n\033[1;31;40m"))


message = input(greetings)

doctor_1 = Doctor()

doctor_1.response(message)
