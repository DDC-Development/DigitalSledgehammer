# Committing

So you've spotted a bug that you want to fix, or there's a feature that you're just dying to implement. Don't worry, there's an easy solution!

### Step Zero - Fork the repository

Yes, we are counting from zero. Go to `https://github.com/DDC-Development/DigitalSledgehammer.git`, and click the `Fork` button.

### Step One – Clone the repository

You'll need to start by cloning the repository into an empty directory.
You can do this with the command `git clone https://github.com/your_username/DigitalSledgehammer.git`. Replace `your_username` with your actual username.

### Step Two – Enter the directory

You can do this by using `cd DigitalSledgehammer`

### Step Three – Create a branch

To commit to Digital Sledgehammer, you'll need to create a branch. To create a branch, you'll need to write a one or two word summary of the changes you're making. When you've done that, use the command `git checkout -b your-summary-here`, replacing `your-summary-here` with the summmary you wrote. If I wanted to update the documentation, for example, I would use `git checkout -b update-docs`.

### Step Four – Make your changes

Now, you can make whatever changes you wish to make. When you're done, use `git add` followed by all of the files that you've changed.
Then, make a commit with `git commit -m "commit message here"`, replacing `commit message here` with your actual commit message, a short passage, no more than 10 words usually, that describes what you've done.

Then, you can finalise your commit with `git push -u origin your_original_commit_message`, replacing `your_original_commit_message` with the summary you wrote in step three.

### Step Five – Compare and pull request

Now, go back to `https://github.com/your_username/DigitalSledgehammer.git`, replacing `your_username` with your actual username. You should now see a button at the top of the page marked _Compare and Pull Request_. Click on it, and in the form, specify the name of your pull request (which is automatically set as the commit message of your most recent change) and a description. There is only one main branch of DigitalSledgehammer, so you'll need to specify `base: main` in the top box of the form.



*_© DDC Dev, 2023_*