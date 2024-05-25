# Define the Node class for the linked list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to traverse and print the elements of the linked list


def traverse_linked_list(head):
    # Start from the head of the linked list
    current = head

    # Traverse the linked list until reaching the end (None)
    while current is not None:
        # Print the data of the current node followed by a space
        print(current.data),

        # Move to the next node
        current = current.next

    print()  # Print a new line after traversing the linked list

# Example usage:
# Assuming the linked list is already constructed


# Create nodes
head = Node(1)
second = Node(2)
third = Node(3)

# Connect nodes
head.next = second
second.next = third

# Call the traverse_linked_list function to print the linked list elements
traverse_linked_list(head)
