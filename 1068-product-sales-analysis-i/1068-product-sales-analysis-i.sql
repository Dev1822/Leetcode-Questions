# Write your MySQL query statement below
Select Product.product_name, sales.year, sales.price
from sales
LEFT JOIN product
on product.product_id=sales.product_id