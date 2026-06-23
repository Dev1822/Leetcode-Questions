import pandas as pd

def calculate_bonus(row):
    if row["employee_id"] % 2 == 1 and not row["name"].startswith("M"):
        return row["salary"]
    return 0

def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    employees["bonus"] = employees.apply(calculate_bonus, axis=1)
    return employees.drop(["name","salary"],axis=1).sort_values(by="employee_id",ascending=True)