import pandas as pd

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
    students["grade"] = pd.to_numeric(students["grade"], errors="coerce").astype("Int64")
    return students