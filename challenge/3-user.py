#!/usr/bin/python3
"""
 User Model
"""
import hashlib

class User:
    def __init__(self, username, password):
        self.username = username
        self.__password = password

    def is_valid_password(self, password):
        return self.__password == password

if __name__ == "__main__":
    user = User("Test User", "pass123")
    print("is_valid_password should return True if it's the right password")
    print(user.is_valid_password("pass123"))
