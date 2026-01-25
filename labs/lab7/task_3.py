personnel = [
    {"name": "Dr. Klein", "clearance": 2},
    {"name": "Agent Brooks", "clearance": 4},
    {"name": "Technician Reed", "clearance": 1}
]

total_request_level = list(map(lambda score: dict(score, category="Top Secret" if score["clearance"] >= 4 else ("Confidential" if score["clearance"] >= 2 else "Restricted")), personnel))


print(total_request_level)