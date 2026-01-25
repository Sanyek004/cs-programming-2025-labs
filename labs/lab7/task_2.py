staff_shifts = [
    {"name": "Dr. Shaw", "shift_cost": 120, "shifts": 15},
    {"name": "Agent Torres", "shift_cost": 90, "shifts": 22},
    {"name": "Researcher Hall", "shift_cost": 150, "shifts": 10}
]

total_costs = list(map(lambda x: x["shift_cost"] * x["shifts"], staff_shifts))

print(total_costs)

result = max(staff_shifts, key=lambda x: x["shifts"])

print(result)