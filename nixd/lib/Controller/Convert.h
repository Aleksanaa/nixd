/// \file
/// \brief Convert between LSP and nixf types.

#pragma once

#include "nixf/Basic/Diagnostic.h"
#include "nixf/Basic/Range.h"

#include "lspserver/Protocol.h"

namespace nixd {

lspserver::Position toLSPPosition(const nixf::LexerCursor &P);

nixf::Position toNixfPosition(const lspserver::Position &P);

nixf::PositionRange toNixfRange(const lspserver::Range &P);

lspserver::Range toLSPRange(const nixf::LexerCursorRange &R);

int getLSPSeverity(nixf::Diagnostic::DiagnosticKind Kind);

llvm::SmallVector<lspserver::DiagnosticTag, 1>
toLSPTags(const std::vector<nixf::DiagnosticTag> &Tags);

} // namespace nixd
