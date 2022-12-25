load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

# http_archive(
#   name = "com_google_googletest",
#   urls = ["https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip"],
#   strip_prefix = "googletest-609281088cfefc76f9d0ce82e1ff6c30cc3591e5",
# )

git_repository(
  name = "com_google_googletest",
  remote = "https://github.com/google/googletest.git",
  tag = "release-1.12.1",
)