# Write your MySQL query statement below
Select
sample_id,dna_sequence,species,
dna_sequence REGEXP "^ATG" as "has_start",
dna_sequence REGEXP "(TAA|TAG|TGA)$" as "has_stop",
dna_sequence REGEXP "ATAT" as "has_atat",
dna_sequence REGEXP "GGG" as "has_ggg"
from Samples
Order By sample_id;