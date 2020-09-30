### Hi there 👋
# This is Srishti Gauraha.
 # Welcome here......

- 🔭 I’m currently working on HTML,JAVA and Python.
- 🌱 I’m currently learning Web Development and Competitive Coding.
- 👯 I’m looking to collaborate on open source projects.
- 🤔 I’m looking for help with logic building and competitive coding.
- 💬 Ask me about related to my repositories.
- 📫 How to reach me: https://www.linkedin.com/in/srishti-gauraha-a2a8851a1/
- 😄 Pronouns: Enthusiatic and optimistic.
- ⚡ Fun fact: I like to play Badminton.
name: README Info Update

on:
  schedule:
    - cron: "0 0 * * *"
  workflow_dispatch:

jobs:
  update-readme:
    name: GitHub README Generator
    runs-on: ubuntu-latest
    steps:
      - uses: th3c0d3br34ker/github-readme-info@master
        with:
          GH_TOKEN: ${{ secrets.GH_TOKEN }}
          TIMEZONE: "Asia/Kolkata"
          SHOW_LINES_OF_CODE: "True"
          SHOW_PROFILE_VIEWS: "True"
          SHOW_DAILY_COMMIT: "True"
          SHOW_WEEKLY_COMMIT: "True"
          SHOW_LANGUAGE: "True"
          SHOW_TOTAL_CONTRIBUTIONS: "True"
