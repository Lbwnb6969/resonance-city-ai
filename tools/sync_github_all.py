"""Prepare/review both repository plans, then publish both roles without force pushes."""
from pathlib import Path
import argparse
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['prepare', 'push'])
    action = parser.parse_args().action
    # Full publication preserves local HEAD. Design publication may fast-forward
    # the local design branch, so it goes last when both reviewed plans are pushed.
    scripts = ['sync_github_full.py', 'sync_github_main.py']
    for name in scripts:
        subprocess.run([sys.executable, str(ROOT / 'tools' / name), action], cwd=ROOT, check=True)
