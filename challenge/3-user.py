#!/usr/bin/python3
"""
 User Model
"""
import hashlib

class User:
    def __init__(self, username, password):
        self.username = username
        # Hashing the password before storing it for better security
        self.password_hash = self._hash_password(password)

    def _hash_password(self, password):
        """Hash the password using SHA-256"""
        return hashlib.sha256(password.encode()).hexdigest()

    def is_valid_password(self, password):
        """Check if the provided password matches the stored password hash"""
        return self.password_hash == self._hash_password(password)


# Test the User class
if __name__ == "__main__":
    # Creating a User object
    user = User("Test User", "password123")

    # Valid password test
    assert user.is_valid_password("password123"), "is_valid_password should return True for the correct password"

    # Invalid password test
    assert not user.is_valid_password("wrongpassword"), "is_valid_password should return False for the wrong password"

    print("All tests passed.")
