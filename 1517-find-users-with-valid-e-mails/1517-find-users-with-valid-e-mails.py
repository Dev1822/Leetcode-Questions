import pandas as pd

def check(mail):
    if "@" not in mail:
        return False
    parts=mail.split("@",maxsplit=1)
    if parts[1]!='leetcode.com':
        return False
    if not parts[0][0].isalpha(): 
        return False
    for ch in parts[0]:
        if not (ch.isalnum() or ch in "_.-"):
            return False
    return True

def valid_emails(users: pd.DataFrame) -> pd.DataFrame:
    return users[users["mail"].apply(check)]