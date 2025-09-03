import os  # To encrypt the key
from openai import OpenAI
from dotenv import load_dotenv  # To get the API

# To load from .env
load_dotenv()
# Initialize client with OpenRouter (free tier available)
client = OpenAI(
    api_key=os.getenv("OPENROUTER_API_KEY"),  # btw get from https://openrouter.ai/keys
    base_url="https://openrouter.ai/api/v1",
)

# User + system prompts
user_prompt = input("Prompt: ")
system_prompt = "Limit your answer to one sentence."

# Call OpenAI Chat API
response = client.chat.completions.create(
    model="deepseek/deepseek-chat",
    messages=[
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": user_prompt},
    ],
)

# Print the response
print(response.choices[0].message.content)
